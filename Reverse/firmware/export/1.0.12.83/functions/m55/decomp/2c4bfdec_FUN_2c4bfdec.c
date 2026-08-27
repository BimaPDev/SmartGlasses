/* FUN_2c4bfdec @ 0x2c4bfdec */

int FUN_2c4bfdec(uint param_1)

{
  char cVar1;
  
  if (param_1 < 0x10) {
    cVar1 = *(char *)(DAT_2c4bfdfc + param_1);
  }
  else {
    cVar1 = *(char *)(DAT_2c4bfdfc + 0xf);
  }
  return (int)cVar1;
}

