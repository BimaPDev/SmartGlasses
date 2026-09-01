/* FUN_1009df50 @ 0x1009df50 */

undefined4 FUN_1009df50(void)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_r3;
  
  piVar2 = DAT_1009dfb8;
  puVar1 = DAT_1009dfb4;
  FUN_10092f78(DAT_1009dfb4);
  *puVar1 = 4;
  *(undefined4 *)(puVar1 + 4) = DAT_1009dfbc;
  *(undefined4 *)(puVar1 + 0xc) = DAT_1009dfc0;
  iVar3 = FUN_10092f98(puVar1);
  *piVar2 = iVar3;
  if (iVar3 == 0) {
    FUN_100a5b78((DAT_1009dfc8 - DAT_1009dfc4) * 0x20 & 0xff00U | 0x680011,DAT_1009dfd0,DAT_1009dfcc
                 ,DAT_1009dfc4,in_r3);
    uVar4 = 0xffffffff;
  }
  else {
    iVar3 = FUN_10087308();
    if (iVar3 == 0) {
      iVar3 = FUN_10087270();
      FUN_100872fc();
    }
    FUN_10124692(*piVar2,iVar3);
    uVar4 = 0;
  }
  return uVar4;
}

