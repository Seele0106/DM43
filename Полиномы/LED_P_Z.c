//Подружаемые модули отсутствуют
//Прототип: RATIONAL LED_P_Z(struct POLYNOMIAL); st - структура с массивом коэффициентов factors и старшей степенью degree
//Возвращает старший коэффициент многочлена по данному набору коэффициентов
//Голубев, гр.4306

RATIONAL LED_P_Z(struct POLYNOMIAL st)
{
  return st.factors[st.degree];
}
