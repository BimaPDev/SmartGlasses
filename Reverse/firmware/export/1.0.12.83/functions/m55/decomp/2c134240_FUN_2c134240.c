/* FUN_2c134240 @ 0x2c134240 */

int FUN_2c134240(void)

{
  bool bVar1;
  undefined4 uVar2;
  char cVar3;
  
  cVar3 = '\0';
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = getCurrentExceptionNumber();
    cVar3 = (char)uVar2;
  }
  return (int)(char)(cVar3 + -0x10);
}

