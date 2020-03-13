#include <iostream>

Sales_data& Sales_data::combine(Sales_data const &rhs){
    this->units_sold += rhs.units_sold;
    this->revenue += rhs.revenue;
    return *this;
}

istream &read(Sales_data &item, istream &is){
    double price = 0;
    std::cin >> item.bookNo >> item.unit_sold >> price;
    item.revenue = price * item.unit_sold;
    return is;
}

ostream &print(Sales_data const &item, ostream &os){
    os << item.bookNo << " " << item.unit_sold << " "
        << item.revenue << " " << item.avg_price();
    return os;
}

Sales_data &add(Sales_data &item, const Sales_data &rhs){
    return item.combine(rhs);
}