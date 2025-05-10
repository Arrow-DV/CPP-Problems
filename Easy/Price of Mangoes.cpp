int mango(int quantity, int price)
{
    int free_mango = (int) quantity / 3;
    quantity -= free_mango;
    return quantity * price ;

}