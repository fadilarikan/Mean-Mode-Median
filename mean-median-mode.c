#include <stdio.h>
#include <stdlib.h>

float find_mean(int values[], int count);

float find_median(int values[], int count);

int find_mode(int values[], int count);

int main()
{
	int i,a;
	int values[100];

	for(i=0; i<100; i++){
        printf("Enter the numbers :"); scanf("%d",&a);
        if(a==-1){
            break;
        }
        else{
            values[i]=a;
        }
	}
	printf("mean=%.2f\t",find_mean(values,i));
	printf("median=%.2f\t",find_median(values,i));
	printf("mode=%d",find_mode(values,i));
	return 0;
}

float find_mean(int values[], int countx)
{
	int i;
	float sum;

    for(i=0; i<countx; i++){
        if(values[i]==-1){
            break;
        }
        sum+=values[i];
    }

    return (float)sum/(countx);
}

float find_median(int values[], int countx)
{
	int i;
	float median;

    if(countx%2==0){
        median=((float)values[countx/2]+values[(countx/2)-1])/2;
    }
    else{
        median=values[countx/2];
    }
    return median;
}

int find_mode(int values[], int count )
{
    int maxCount = 0, maxValue = 0, county, i, j;

    for( i = 0; i < count; i++ ) {
        county = 0;

        for( j = 0; j < count; j++ ) {
            if( values[j] == values[i] )
                county++;
        }

        if( county > maxCount ) {
            maxCount = county;
            maxValue = values[i];
        }
    }
    return maxValue;
}
