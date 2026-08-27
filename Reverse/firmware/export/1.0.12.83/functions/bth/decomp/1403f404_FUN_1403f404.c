/* FUN_1403f404 @ 0x1403f404 */

undefined4 FUN_1403f404(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_1402a6e8(4,0x278,DAT_1403f430,DAT_1403f42c,DAT_1403f428);
  uVar2 = DAT_1403f438;
  uVar1 = DAT_1403f434;
  FUN_1402a6e8(4,0xdd,DAT_140b42a8,DAT_140b42a4,DAT_140b429c,DAT_140b42a0,DAT_1403f438);
  iVar3 = FUN_140b3e3c(uVar2);
  if (iVar3 != -1) {
    return 0;
  }
  FUN_140b4210(uVar2,uVar1);
  return 0;
}

