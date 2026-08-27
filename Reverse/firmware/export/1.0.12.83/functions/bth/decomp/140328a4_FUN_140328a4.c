/* FUN_140328a4 @ 0x140328a4 */

int FUN_140328a4(short param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_140328f8;
  iVar2 = (int)(short)(param_1 + -0x56);
  FUN_1402a6e8(4,0x62b,DAT_14032900,DAT_140328fc,DAT_140328f4,DAT_140328f8,iVar2);
  if ((iVar2 < 0) && (param_2 << 0x1f < 0)) {
    iVar2 = (int)(short)(param_1 + 0x21a);
  }
  FUN_1402a6e8(4,0x630,DAT_14032900,DAT_140328fc,DAT_14032904,uVar1,iVar2);
  return iVar2;
}

