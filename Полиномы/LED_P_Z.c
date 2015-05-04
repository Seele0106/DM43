//Подружаемые модули отсутствуют
//Прототип: RATIONAL LED_P_Z(struct POLYNOMIAL);
//Возвращает старший коэффициент многочлена по данному набору коэффициентов
//Необходимо подключение malloc.h
//Голубев, гр.4306

RATIONAL LED_P_Z(struct POLYNOMIAL st)
{
  return st.factors[st.degree];
}
