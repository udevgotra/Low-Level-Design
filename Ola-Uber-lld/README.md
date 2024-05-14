We've to first highlight and understand the vital components of the system.

In this ll design, we can consider 3 main components: Riders, Drivers, Trip.

Let's assume each driver has a cab/car associated with it.

When a rider books a ride, the system should create a trip as soon as a driver is assigned to the rider
depending upon the the driver matching algorithm/strategy.

This algo/strategy should varies case to case. For instance, getting the closest driver? or having highest
no of ratings? etc.

There should be a class, perhaps "DriverManager" that should take responsibility of managing all the drivers, show availability and non-availability of the Drivers.

DriverManager should be a Singleton class, and all the Drivers should've aggregation relationhip with Drivermanager class.

Similarly for the Riders, the managing class should be "RiderManager" -Singleton and all riders shows up aggregation relationship.

Along with "Driver Matching" strategy, I'd suggest an another strategy to consider, "Pricing". Togather with "Driver Matching" and "Pricing" strategy, here comes the minimal requirement in creating the "Trip".

However, there should've been other algorithms as well, might add up in the future, yet the above two are atmost important.

Therefore inorder to make system scalable, let's also make "Strategy Manager" -Singleton having responsible for all the strategies to be applied.

So we've got "Strategy Manager"  having "Driving Strategy" as well as "Pricing Strategy" and so on..
In the future when new startegies comes into picture, only the "Strategy Manager", should know that. The other part of the system may not be so interested in knowing what's the update with strategies.


Strategy Manager should've access to the trip information, but shoudln't be needing all that informaton like rider details,kyc, payment details etc. Therefore, we should yet have a class "Trip Meta-Data" -having rider,driver info just needed by "Strategy Manager" to decide upon various strategies.

An individual "trip" should have access to the riders as well as drivers details so it could send those data to the "Strategy Manager"
Trip/trip data is created/generated when the rider books a ride !

In doing so, the "Trip" should be able to talk to "Driver Manager" as well as "Rider Manager" and to create a trip, it should be managed via "Trip Manager". But here's composition relation. No "Trip Manager" No "Trip".

"Driver Manager" & "Rider Manager" to thr "Trip Manager" possess aggregation relationship.
"Trip Manager" having relation with "Trip Mata-deta" and "Trip" possess composition relationship.


"Strategy Manager" having "Driving Strategy" and "Pricing Strategy" have "strategy design pattern" having unidirectional association relationship.

"Driving Strategy" -have strategy based upon - least time taken or nearest highest rating etc.
"Pricing Strategy" -have strategy based upon- default pricing/km or rating based or number of rides/day etc
