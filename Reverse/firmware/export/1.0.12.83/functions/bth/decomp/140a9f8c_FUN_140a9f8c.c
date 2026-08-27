/* FUN_140a9f8c @ 0x140a9f8c */

undefined4 FUN_140a9f8c(undefined2 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = DAT_140a9ff0;
  FUN_140e5148(*(undefined4 *)(DAT_140a9ff0 + 0xd0),0xffffffff);
  cVar1 = *(char *)(iVar2 + 0xd8);
  FUN_140e52d8(*(undefined4 *)(iVar2 + 0xd0));
  if (cVar1 == '\x02') {
    iVar4 = 0x32;
    do {
      FUN_140e5148(*(undefined4 *)(iVar2 + 0xd0),0xffffffff);
      cVar1 = *(char *)(iVar2 + 0xda);
      FUN_140e52d8(*(undefined4 *)(iVar2 + 0xd0));
      if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x140a9fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(iVar2 + 0x6c))(param_1);
        return uVar3;
      }
      FUN_140e5a08();
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

