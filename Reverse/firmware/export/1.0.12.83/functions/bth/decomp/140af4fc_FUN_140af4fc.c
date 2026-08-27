/* FUN_140af4fc @ 0x140af4fc */

void FUN_140af4fc(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint local_30;
  undefined2 local_2c;
  int local_28;
  int local_24;
  
  uVar4 = DAT_140af610;
  uVar3 = DAT_140af60c;
  uVar2 = DAT_140af5f8;
  piVar1 = DAT_140af5f0;
  iVar6 = *DAT_140af5f0;
  local_24 = *DAT_140af5f4;
  if (*(int *)(iVar6 + 0x16c) != 0) {
    uVar8 = 0;
    do {
      iVar6 = uVar8 * 0x118 + iVar6;
      local_30 = *(uint *)(iVar6 + 0x170);
      uVar7 = *(uint *)(iVar6 + 0x174);
      local_2c = (undefined2)uVar7;
      FUN_1402a6e8(4,0x3be,uVar2,uVar3,uVar4,local_30 & 0xff,local_30 >> 8 & 0xff,
                   local_30 >> 0x10 & 0xff,local_30 >> 0x18,uVar7 & 0xff,(uVar7 & 0xffff) >> 8);
      local_28 = FUN_1404ce50(&local_30);
      iVar6 = *piVar1;
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar8 < *(uint *)(iVar6 + 0x16c));
    if (local_28 != 0) goto LAB_140af58a;
  }
  uVar2 = DAT_140af600;
  iVar6 = DAT_140af5fc;
  iVar5 = DAT_140af5fc + 0x14c;
  *(int *)(DAT_140af5fc + 0x14c) = iVar5;
  *(int *)(iVar6 + 0x150) = iVar5;
  FUN_140e5658(uVar2,0,0xf8);
  FUN_1402a6e8(4,0x3c9,DAT_140af5f8,DAT_140af60c,DAT_140af604,DAT_140af608,uVar2);
  local_28 = 0;
LAB_140af58a:
  FUN_140a49fc(0x33,&local_28,4);
  if (*DAT_140af5f4 == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

