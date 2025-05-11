int combat(int health, int damage){
    return damage < health ? (health - damage) : 0  ;
}