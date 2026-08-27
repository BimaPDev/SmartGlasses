/* FUN_1409a190 @ 0x1409a190 */

undefined4 FUN_1409a190(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = *(char *)(param_1 + 4);
  if (cVar1 == '\x01') {
    iVar2 = FUN_1409d184();
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 != '\0') {
        return 0;
      }
      FUN_1409d310((int)*(char *)(param_1 + 8));
      FUN_1409d30c();
      return 0;
    }
    iVar2 = FUN_1409d304();
  }
  iVar3 = *DAT_1409a1e0;
  (**(code **)(iVar3 + 0x20))();
  (**(code **)(iVar3 + 0x24))();
  if ((iVar2 != 0xff) && (*(code **)(param_1 + 0xc) != (code *)0x0)) {
    (**(code **)(param_1 + 0xc))(iVar2);
    return 0;
  }
  return 0;
}

