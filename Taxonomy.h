#ifndef TAXONOMY_H
#define TAXONOMY_H

class Taxonomy{
	public:
		virtual void showTaxName()=0;
	protected:
		const string taxName;
};

#endif