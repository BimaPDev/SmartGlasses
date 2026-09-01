/* FUN_1007c700 @ 0x1007c700 */

void FUN_1007c700(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined4 uVar6;
  uint uVar7;
  int iVar5;
  
  iVar2 = DAT_1007c784;
  cVar1 = *(char *)(DAT_1007c784 + 0x14b);
  uVar7 = (DAT_1007c788 - DAT_1007c78c) * 0x20 & 0xff00;
  if (cVar1 == '\x01') {
    uVar3 = *(undefined1 *)(DAT_1007c784 + 0x10);
  }
  else if (cVar1 == '\x02') {
    uVar3 = *(undefined1 *)(DAT_1007c784 + 0x14);
  }
  else if (cVar1 == '\x03') {
    uVar3 = *(undefined1 *)(DAT_1007c784 + 0x18);
  }
  else {
    FUN_100a5b78(uVar7 | 0xfb0031,PTR_s_bat_mini_charge_set_1007c798,
                 PTR_s_mini_charge_stage_err__set_defau_1007c7a0,cVar1,param_1,param_2);
    uVar3 = *(undefined1 *)(iVar2 + 0x10);
    *(undefined1 *)(iVar2 + 0x14b) = 1;
  }
  iVar5 = FUN_1007c5fc(uVar3);
  bVar4 = FUN_1007c690(iVar5 + *(int *)(iVar2 + 0x1f0) & 0xffff);
  FUN_1007c100(DAT_1007c790,(uint)bVar4 | (uint)*(byte *)(iVar2 + 10) << 5 | 0x400);
  uVar6 = FUN_1007c5fc((uint)bVar4);
  FUN_100a5b78(DAT_1007c794 | uVar7,PTR_s_bat_mini_charge_set_1007c798,
               PTR_s_mini_charge__cc___dma__cv_level__1007c79c,uVar6,*(undefined1 *)(iVar2 + 10));
  return;
}

