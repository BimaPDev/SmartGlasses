/* FUN_140ad8cc @ 0x140ad8cc */

undefined4 FUN_140ad8cc(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar2 = DAT_140ad8f8;
  piVar1 = DAT_140ad8f0;
  if (*DAT_140ad8f0 != 0) {
    return 0;
  }
  *DAT_140ad8f4 = 0;
  uVar3 = DAT_140ad8fc;
  *puVar2 = 0;
  iVar4 = FUN_140e52f8(uVar3,0);
  *piVar1 = iVar4;
  return 0;
}

