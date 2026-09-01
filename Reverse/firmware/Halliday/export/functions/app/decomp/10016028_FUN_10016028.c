/* FUN_10016028 @ 0x10016028 */

void FUN_10016028(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  uint extraout_r2;
  uint uVar6;
  uint extraout_r3;
  ulonglong uVar7;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  undefined1 local_1c;
  int local_c;
  
  local_c = *DAT_1001615c;
  iVar1 = FUN_10015d78();
  if (iVar1 == 0) goto LAB_100160bc;
  uVar6 = *(uint *)(iVar1 + 0x44);
  bVar4 = *(char *)(iVar1 + 0x48) + 1;
  uVar5 = (uint)bVar4;
  *(byte *)(iVar1 + 0x48) = bVar4;
  if ((uVar6 != 1) &&
     (uVar7 = (ulonglong)CONCAT14(*(byte *)(iVar1 + 0x49),iVar1) & 0x1ffffffff,
     (*(byte *)(iVar1 + 0x49) & 1) == 0)) goto LAB_100160ca;
  FUN_10017474(iVar1,1);
  while( true ) {
    if (((*(int *)(iVar1 + 0x44) != 0x200) && (*(int *)(iVar1 + 0x44) != 0x800)) &&
       (19999 < (uint)*(byte *)(iVar1 + 0x48) * 500)) {
      FUN_1011ea48(auStack_20,0,0x14);
      local_1e = 0xd408;
      local_1c = 1;
      FUN_1009ece8(DAT_10016160,auStack_20);
      FUN_100a5b78(DAT_1001616c | (DAT_10016168 - DAT_10016164) * 0x20 & 0xff00U,DAT_10016174,
                   DAT_10016170);
    }
LAB_100160bc:
    if (*DAT_1001615c == local_c) break;
    uVar7 = FUN_1013cdc0();
    uVar5 = extraout_r2;
    uVar6 = extraout_r3;
LAB_100160ca:
    uVar3 = (undefined4)(uVar7 >> 0x20);
    uVar2 = (undefined4)uVar7;
    if (uVar6 == 2) {
      if (-1 < (int)(uVar5 << 0x1f)) {
        uVar3 = 1;
      }
      FUN_100174e0(uVar2,uVar3);
    }
    else if ((uVar6 == 4) || (uVar6 == 0x10)) {
      FUN_10017498(iVar1,-1 < (int)(uVar5 << 0x1f));
    }
    else if ((uVar6 == 8) || (uVar6 == 0x20)) {
      FUN_100174bc(iVar1,-1 < (int)(uVar5 << 0x1f));
    }
    else if (uVar6 == 0x40) {
      FUN_100173c0(iVar1,-1 < (int)(uVar5 << 0x1f));
    }
    else if (uVar6 == 0x80) {
      FUN_10017408(uVar2,-1 < (int)(uVar5 << 0x1f));
    }
    else if (uVar6 == 0x100) {
      FUN_1001742c(uVar2,-1 < (int)(uVar5 << 0x1f));
    }
    else if ((uVar6 & 0xfffffdff) == 0) {
      FUN_10017528(uVar2,-1 < (int)(uVar5 << 0x1f));
    }
  }
  return;
}

