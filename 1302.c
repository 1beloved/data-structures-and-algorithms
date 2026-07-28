#include <stdio.h>
#include <malloc.h>
struct student{
long int num; 
char name[20]; 
char major[25];
     
}; 
 
int main()
{
    FILE *fp=fopen("studs.dat","rb");
    struct student *stu;
    stu=(struct student*)malloc(sizeof(struct student));
    fread(stu,sizeof(struct student),1,fp);
    while(!feof(fp))
    {
        printf("%ld %s %s\n",stu->num,stu->name,stu->major);
        fread(stu,sizeof(struct student),1,fp);
    }
    fclose(fp);
}
