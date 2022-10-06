class Book
{
private:
	string title;
	vector<string> paragraphs;
	vector<string> images;
	vector<string> tables;
public:
	void Book(string title);
	void createNewParagraph(string paragraph);
	void createNewImage(string image);
	void createNewTable(string table);
};