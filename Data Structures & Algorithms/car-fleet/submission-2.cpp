class Solution {
public:
    int carFleet(int target, vector<int>& p, vector<int>& s) {
        // Map to store cars with their positions and speeds
        map<float, float> cars;
        // Variable to keep track of the number of fleets
        auto fleets = 0;
        // Variable to store the last time a fleet is encountered
        auto last_time = -1.0f;

        // Insert cars into the map with negative positions as keys (to sort in descending order)
        for(int i = 0; i < p.size(); i++) {
            cars.insert({-p[i], s[i]});
        }

        // Iterate through the sorted cars
        for(auto &car : cars) {
            // Calculate the time it takes for the car to reach the target
            auto time = (target + car.first) / car.second;
            
            // Check if the current car forms a new fleet
            if(last_time < time) {
                // Increment the fleet count
                fleets++;
                // Update the last_time to the current time
                last_time = time;
            }
        }

        // Return the total number of fleets
        return fleets;
    }
};