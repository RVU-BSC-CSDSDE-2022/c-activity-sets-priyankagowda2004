#include<stdio.h>
#include<math.h>

void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

void input_camel_details(float *radius, float *height, float *length)
{
  printf("Enter the stomach radius\n");
  scanf("%f",radius);
  printf("Enter the height radius\n");
  scanf("%f",height);
  printf("Enter the length radius\n");
  scanf("%f",length);
}

float find_weight(float radius, float height, float length)
{
  float pi=3.1415;
  float weight;
  weight=pi*(radius*radius*radius)*sqrt(height*length);
  return weight;
}

void output(float radius, float height, float length, float weight)
{
  printf("The weight of the camel with radius : %f , length : %f and height : %f is %f",radius,length,height,weight);
}

int main()
{
  float radius,height,length,weight;
  input_camel_details(&radius,&height,&length);
  weight=find_weight(radius,height,length);
  output(radius,height,length,weight);
  return 0;
}