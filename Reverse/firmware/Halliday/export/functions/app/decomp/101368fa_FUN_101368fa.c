/* FUN_101368fa @ 0x101368fa */

undefined4 FUN_101368fa(char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_10136444();
  cVar1 = FUN_10136610();
  *param_1 = cVar1;
  FUN_10136462(uVar2);
  uVar2 = 0xffffffff;
  if (cVar1 != '\x7f') {
    uVar2 = 0;
  }
  return uVar2;
}

