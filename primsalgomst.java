import java.util.*;

class PrimsMST {

    // Function to return MST weight using Prim's Algorithm
    public int primMST(int n, int[][] edges) {
        // Step 1: Build adjacency list
        List<int[]>[] graph = new ArrayList[n];
        for (int i = 0; i < n; i++) {
            graph[i] = new ArrayList<>();
        }
        for (int[] edge : edges) {
            int u = edge[0], v = edge[1], w = edge[2];
            graph[u].add(new int[]{v, w});
            graph[v].add(new int[]{u, w}); // undirected graph
        }

        // Step 2: MinHeap to pick smallest edge
        PriorityQueue<int[]> pq = new PriorityQueue<>((a, b) -> a[1] - b[1]);
        boolean[] visited = new boolean[n];
        int totalWeight = 0;
        int nodesVisited = 0;

        // Start from node 0
        pq.offer(new int[]{0, 0});  // {node, weight}

        while (!pq.isEmpty() && nodesVisited < n) {
            int[] curr = pq.poll();
            int node = curr[0];
            int weight = curr[1];

            if (visited[node]) continue;  // skip if already in MST

            // Include this node
            visited[node] = true;
            totalWeight += weight;
            nodesVisited++;

            // Add neighbors to heap
            for (int[] neighbor : graph[node]) {
                int next = neighbor[0];
                int w = neighbor[1];
                if (!visited[next]) {
                    pq.offer(new int[]{next, w});
                }
            }
        }

        // If all nodes are visited, return total weight
        return (nodesVisited == n) ? totalWeight : -1;
    }

    // Example usage
    public static void main(String[] args) {
        PrimsMST solver = new PrimsMST();

        int n = 4;
        int[][] edges = {
            {0, 1, 10},
            {0, 2, 6},
            {0, 3, 5},
            {1, 3, 15},
            {2, 3, 4}
        };

        int result = solver.primMST(n, edges);
        System.out.println("Total weight of MST = " + result);
    }
}
