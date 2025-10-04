import java.util.*;

class KruskalsMST {
    
    // DSU implementation
    static class DSU {
        int[] parent, rank;

        DSU(int n) {
            parent = new int[n];
            rank = new int[n];
            for (int i = 0; i < n; i++) {
                parent[i] = i;
                rank[i] = 0;
            }
        }

        int find(int x) {
            if (parent[x] != x) {
                parent[x] = find(parent[x]); // path compression
            }
            return parent[x];
        }

        boolean union(int x, int y) {
            int rootX = find(x);
            int rootY = find(y);

            if (rootX == rootY) return false; // already connected

            if (rank[rootX] < rank[rootY]) {
                parent[rootX] = rootY;
            } else if (rank[rootX] > rank[rootY]) {
                parent[rootY] = rootX;
            } else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
            return true;
        }
    }

    // Function to return weight of MST
    public int kruskalMST(int n, int[][] edges) {
        // Sort edges by weight
        Arrays.sort(edges, (a, b) -> a[2] - b[2]);

        DSU dsu = new DSU(n);
        int totalWeight = 0;
        int edgesUsed = 0;

        for (int[] edge : edges) {
            int u = edge[0], v = edge[1], w = edge[2];
            if (dsu.union(u, v)) {  // include edge if no cycle
                totalWeight += w;
                edgesUsed++;
                if (edgesUsed == n - 1) break; // MST complete
            }
        }

        return (edgesUsed == n - 1) ? totalWeight : -1; // if graph not connected
    }

    // Example usage
    public static void main(String[] args) {
        KruskalsMST solver = new KruskalsMST();

        int n = 4; // number of vertices
        int[][] edges = {
            {0, 1, 10},
            {0, 2, 6},
            {0, 3, 5},
            {1, 3, 15},
            {2, 3, 4}
        };

        int result = solver.kruskalMST(n, edges);
        System.out.println("Total weight of MST = " + result);
    }
}
