    #include<stdio.h>
    #include<math.h>

    int main()
    {
        float lon1,lon2,lat1,lat2,D;
        const float PI = 3.141592;

        printf("Enter lattitudes L1,L2\n");
        scanf("%f%f",&lat1,&lat2);
        
        printf("Enter longitudes G1,G2\n");
        scanf("%f%f",&lon1,&lon2);

        lat1 = lat1*(PI/180.0);
        lat2 = lat2*(PI/180.0);
        lon1 = lon1*(PI/180.0);
        lon2 = lon2*(PI/180.0);

        D = 3963 * acos(sin(lat1)*sin(lat2) + cos(lat1)* cos(lat2) *cos(lat2)-cos(lat1) );

        printf("Distance in nautical miles : %f",D);

    return 0;

    }