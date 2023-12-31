#include "Button.h"

Button::Button(Vector2f position, float width, float height, int red, int green, int blue, std::string text)
{
	m_Text = "" + text;
	float textPaddingX = width / 10;
	float textPaddingY = height / 10;
	m_ButtonText.setCharacterSize(height * .7f);
	m_ButtonText.setString(text);
	m_Font.loadFromFile("fonts/Roboto-Bold.ttf");
	m_ButtonText.setFont(m_Font);
	m_ButtonText.setPosition(Vector2f((position.x + textPaddingX),
		(position.y + textPaddingY)));
	m_Collider = FloatRect(position, Vector2f(width, height));
}
void Button::draw(RenderWindow& window)
{
	window.draw(m_Button);
	window.draw(m_ButtonText);
}
