#include "Util.hpp"

//sf::Vector2f V2itoV2f(sf::Vector2i v) {
//    return sf::Vector2f(v.x, v.y);
//}
//
//sf::Vector2f V2utoV2f(sf::Vector2u v) {
//    return sf::Vector2f((float)v.x, (float)v.y);
//}
//
//sf::Vector2f mouseInWorld(const sf::Transform& transform, const sf::RenderWindow& window) {
//    return transform.getInverse().transformPoint(V2itoV2f(sf::Mouse::getPosition(window)));
//}
//
//float distance(const sf::Vector2f& v1, const sf::Vector2f& v2) {
//    return sqrtf((v2.x - v1.x) * (v2.x - v1.x) + (v2.y - v1.y) * (v2.y - v1.y));
//}
//
//float distance(const sf::Vector2i& v1, const sf::Vector2i& v2) {
//    return sqrtf((v2.x - v1.x) * (v2.x - v1.x) + (v2.y - v1.y) * (v2.y - v1.y));
//}
//
//bool touching(const sf::CircleShape& circle, const sf::Vector2f& position) {
//    sf::Vector2f center(circle.getPosition().x + circle.getRadius(), circle.getPosition().y + circle.getRadius());
//    return (distance(center, position) <= circle.getRadius());
//}
//
//bool touching(const sf::RectangleShape& rect, const sf::Vector2f& position) {
//    return rect.getGlobalBounds().contains(position);
//}
//
//bool touching(const sf::CircleShape& circle, const sf::Vector2i& position) {
//    sf::Vector2i center(circle.getPosition().x + circle.getRadius(), circle.getPosition().y + circle.getRadius());
//    return (distance(center, position) <= circle.getRadius());
//}
//
//bool touching(const sf::RectangleShape& rect, const sf::Vector2i& position) {
//    return rect.getGlobalBounds().contains(V2itoV2f(position));
//}