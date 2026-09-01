/* FUN_1012da7a @ 0x1012da7a */

void FUN_1012da7a(char *param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = (char)(param_2 / 0x3c);
  cVar2 = (char)(param_2 / 0xe10);
  param_1[2] = cVar2;
  param_1[1] = cVar1 + cVar2 * -0x3c;
  *param_1 = (char)param_2 + cVar1 * -0x3c;
  return;
}

