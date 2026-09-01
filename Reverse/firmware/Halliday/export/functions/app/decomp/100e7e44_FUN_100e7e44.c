/* FUN_100e7e44 @ 0x100e7e44 */

undefined4 FUN_100e7e44(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_1c [2];
  undefined1 local_1a;
  undefined4 local_14;
  
  puVar1 = DAT_100e7eb0;
  *DAT_100e7eb0 = 0;
  puVar1[1] = 0;
  FUN_10139064();
  FUN_1011ea48(auStack_1c,0,0x14);
  iVar2 = FUN_1009e9f8(DAT_100e7eb4);
  if (iVar2 == 0) {
    iVar2 = FUN_1009e86c(DAT_100e7eb4);
    if (iVar2 == 0) {
      FUN_100a5b78(DAT_100e7ec8 | (DAT_100e7ec4 - DAT_100e7ec0) * 0x20 & 0xff00U,DAT_100e7ed0,
                   DAT_100e7ecc);
      goto LAB_100e7ea4;
    }
    uVar3 = FUN_1012d0c2(DAT_100e7eb4);
    *DAT_100e7eb8 = uVar3;
  }
  local_1a = 3;
  local_14 = DAT_100e7ebc;
  FUN_1009ece8(DAT_100e7eb4,auStack_1c);
LAB_100e7ea4:
  FUN_100e8184();
  return 0;
}

