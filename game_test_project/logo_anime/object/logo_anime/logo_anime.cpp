#include "object\logo_anime\logo_anime.h"

void Logo_anime::setup(float pos_x, float pos_y, float alpha_speed)
{
	alpha_blend_speed = alpha_speed;//alpha_speed��alpha_blend_speed�ɑ��

	//�摜�����[�h
	logo_D.setup(pos_x, pos_y, "graphics/logo/logo_D.png", alpha_blend_speed);
	logo_i.setup(pos_x + 50, pos_y, "graphics/logo/logo_i.png", alpha_blend_speed);
	logo_p.setup(pos_x + 75, pos_y + 25, "graphics/logo/logo_p.png", alpha_blend_speed);
	logo_l.setup(pos_x + 110, pos_y, "graphics/logo/logo_l.png", alpha_blend_speed);
	logo_o.setup(pos_x + 150, pos_y - 2, "graphics/logo/logo_o.png", alpha_blend_speed);
	logo_i_2.setup(pos_x + 185, pos_y, "graphics/logo/logo_i.png", alpha_blend_speed);
	logo_d.setup(pos_x + 213, pos_y - 4, "graphics/logo/logo_d_small.png", alpha_blend_speed);
}

void Logo_anime::update(float next_time_count)
{
	if (logo_D.alpha >= 255)//logo_D�̃��l��255�ȏ�ɂȂ�����
	{
		time++;//���Ԃ𑝂₷�B
	}

	if (time > next_time_count)//���Ԃ�������ȏ�ɂȂ�����
	{
		//���ꂼ��̃��l��alpha_speed�̓�{���炷�B(�Ȃ�2�{���Ƃ����ƁA���̑����ʂƑ��E���邽�߂ł��B)
		logo_D.alpha -= alpha_blend_speed * 2;
		logo_d.alpha -= alpha_blend_speed * 2;
		logo_i.alpha -= alpha_blend_speed * 2;
		logo_i_2.alpha -= alpha_blend_speed * 2;
		logo_l.alpha -= alpha_blend_speed * 2;
		logo_o.alpha -= alpha_blend_speed * 2;
		logo_p.alpha -= alpha_blend_speed * 2;
	}

	//���ꂼ��A�b�v�f�[�g
	logo_D.update();
	logo_d.update();
	logo_i.update();
	logo_i_2.update();
	logo_l.update();
	logo_o.update();
	logo_p.update();
}

void Logo_anime::draw(bool wire)
{
	logo_D.draw(wire);
	logo_d.draw(wire);
	logo_i.draw(wire);
	logo_i_2.draw(wire);
	logo_l.draw(wire);
	logo_o.draw(wire);
	logo_p.draw(wire);
}