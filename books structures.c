
#include<stdio.h>
struct books{
	char title[30];
	char author[30];
	float price;
	int pages;
	char dateofp[30];
};
int main()
{
	struct books book1,book2,book3;
	printf("Enter the Titles of Book1 Book2 and Book3\n");
	scanf("%s %s %s", book1.title, book2.title, book3.title);
	printf("Enter the Author of Book1 Book2 and Book3\n");
	scanf("%s %s %s", book1.author,book2.author, book3.author);
	printf("Enter the Price of Book1 Book2 and Book3\n");
	scanf("%f %f %f", &book1.price, &book2.price, &book3.price);
	printf("Enter the number of pages of Book1 Book2 and Book3\n");
	scanf("%d %d %d",&book1.pages,&book2.pages,&book3.pages);
	printf("Enter the Dates of publication of Book1 Book2 and Book3\n");
	scanf("%s %s %s", book1.dateofp,book2.dateofp,book3.dateofp);
	printf("Title of Book1 %s\n",book1.title);
	printf("Author of Book1 %s\n",book1.author);
	printf("Price of Book1 %0.2f\n",book1.price);
	printf("Number of pages in Book1 %d\n",book1.pages);
	printf("Date of publication of Book1 %s\n",book1.dateofp);
	printf("Title of Book2 %s\n",book2.title);
	printf("Author of Book2 %s\n",book2.author);
	printf("Price of Book2 %0.2f\n",book2.price);
	printf("Number of pages in Book2 %d\n",book2.pages);
	printf("Date of publication of Book2 %s\n",book2.dateofp);
	printf("Title of Book3 %s\n",book3.title);
	printf("Author of Book3 %s\n",book3.author);
	printf("Price of Book3 %0.2f\n",book3.price);
	printf("Number of pages in Book3 %d\n",book3.pages);
	printf("Date of publication of Book3 %s\n",book3.dateofp);
	if(book1.price>book2.price && book1.price>book3.price)
	{
		printf("Book1 has highest price");
		printf("*********Details of Book 1*********\n");
		printf("Title of Book1 %s\n",book1.title);
		printf("Author of Book1 %s\n",book1.author);
		printf("Price of Book1 %0.2f\n",book1.price);
		printf("Number of pages in Book1 %d\n",book1.pages);
		printf("Date of publication of Book1 %s\n",book1.dateofp);
		printf("************************************\n");
	}
	else if(book2.price>book1.price && book2.price>book3.price)
	{
		printf("Book 2 has highest price\n");
		printf("*********Details of Book 2*********\n");
		printf("Title of Book2 %s\n",book2.title);
		printf("Author of Book2 %s\n",book2.author);
		printf("Price of Book2 %0.2f\n",book2.price);
		printf("Number of pages in Book2 %d\n",book2.pages);
		printf("Date of publication of Book2 %s\n",book2.dateofp);
		printf("************************************\n");
	}
	else
	{
		printf("Book 3 has highest price\n");
		printf("*********Details of Book 3*********\n");
		printf("Title of Book3 %s\n",book3.title);
		printf("Author of Book3 %s\n",book3.author);
		printf("Price of Book3 %0.2f\n",book3.price);
		printf("Number of pages in Book3 %d\n",book3.pages);
		printf("Date of publication of Book3 %s\n",book3.dateofp);
		printf("************************************\n");
	}
	return 0;
}
