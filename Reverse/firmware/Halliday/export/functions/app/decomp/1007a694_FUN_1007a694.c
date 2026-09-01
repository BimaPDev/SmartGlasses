/* FUN_1007a694 @ 0x1007a694 */

uint FUN_1007a694(void)

{
  int iVar1;
  undefined1 *puVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  short sVar9;
  uint local_34 [2];
  byte local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  
  iVar1 = DAT_1007a834;
  sVar9 = *(short *)(DAT_1007a834 + 0x15e);
  uVar4 = thunk_FUN_10115958();
  FUN_100433f8(&local_2c);
  local_34[0] = 0;
  iVar6 = *DAT_1007a838;
  *DAT_1007a838 = iVar6 + 1;
  if (iVar6 == 0) {
    uVar8 = FUN_1012d144(PTR_s_BAT_LAST_TIME_1007a848);
    iVar6 = FUN_101221f0(&local_2c,local_34);
    if (iVar6 == 0) {
      if ((uVar8 & 0xfffffff) <= (local_34[0] & 0xfffffff)) {
        uVar8 = (local_34[0] & 0xfffffff) - (uVar8 & 0xfffffff);
        if (uVar8 < 0xe4c) {
          if (uVar8 < 0x744) {
            iVar6 = 2;
          }
          else {
            iVar6 = 1;
          }
        }
        else {
          iVar6 = 0;
        }
        goto LAB_1007a6c2;
      }
    }
  }
  iVar6 = 2;
LAB_1007a6c2:
  uVar8 = 0;
  FUN_1007a40c(iVar6,sVar9);
  puVar2 = DAT_1007a83c;
  local_34[0] = 0;
  local_34[1] = 0;
  if (iVar6 == 0) {
    uVar8 = FUN_1007a0f0(sVar9);
    puVar2[0xe] = 0;
  }
  else if (iVar6 == 1) {
    iVar6 = thunk_FUN_1009efa0(PTR_s_STORE_CAP_PERCENT_1007a84c,local_34,8);
    if (-1 < iVar6) {
      bVar3 = FUN_1013d036(local_34);
      uVar8 = (uint)bVar3;
    }
    iVar6 = FUN_1007a0f0(sVar9);
    uVar8 = (iVar6 + uVar8 & 0x1ff) >> 1;
    puVar2[0xe] = 0;
  }
  else if (DAT_1007a83c[0xe] == '\0') {
    iVar6 = thunk_FUN_1009efa0(PTR_s_STORE_CAP_PERCENT_1007a84c,local_34,8);
    if (iVar6 < 0) {
      uVar8 = FUN_1007a0f0(sVar9);
    }
    else {
      bVar3 = FUN_1013d036(local_34);
      uVar8 = (uint)bVar3;
    }
  }
  if (puVar2[0xe] == '\0') {
    iVar6 = 0;
    puVar7 = DAT_1007a83c;
    do {
      iVar6 = iVar6 + 1;
      *puVar7 = (char)uVar8;
      puVar7 = puVar7 + 1;
    } while (iVar6 != 0xd);
    puVar2[0xe] = 0xd;
    puVar2[0x10] = (char)uVar8;
    puVar2[0xd] = 0;
  }
  if ((9 < (int)((local_2c + 0x3c) - (uint)*DAT_1007a840) % 0x3c) ||
     (uVar8 = (uint)(byte)puVar2[0x10], uVar8 == 0)) {
    *DAT_1007a840 = local_2c;
    FUN_10119dc2(PTR_s___>_time___d__d__d___d_1007a844,local_2a,local_2b,(uint)local_2c,uVar4 / 1000
                );
    if ((*(char *)(iVar1 + 0x141) == '\x04') && (bVar3 = *(byte *)(iVar1 + 0x1d5), 0x5a < bVar3)) {
      sVar9 = sVar9 + ((ushort)bVar3 + (bVar3 / 0x14) * -0x14 & 0xff) * -3;
    }
    uVar4 = FUN_1007a48c(sVar9);
    if (uVar4 < *(ushort *)(iVar1 + 0x58) + 0xdc) {
      *(undefined1 *)(iVar1 + 0x1d5) = 0x65;
    }
    uVar5 = FUN_1007a0f0();
    uVar8 = FUN_1007a604(uVar5,*(undefined1 *)(iVar1 + 0x141),local_2c);
    *(char *)(iVar1 + 0x1d5) = (char)uVar8;
    FUN_1007a518(uVar4,uVar8);
  }
  return uVar8;
}

