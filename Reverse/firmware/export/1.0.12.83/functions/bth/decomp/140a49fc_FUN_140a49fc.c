/* FUN_140a49fc @ 0x140a49fc */

/* WARNING: Removing unreachable block (ram,0x140a461a) */
/* WARNING: Removing unreachable block (ram,0x140a45a2) */
/* WARNING: Removing unreachable block (ram,0x140a45f2) */

void FUN_140a49fc(uint param_1,int param_2,short param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int aiStack_38 [3];
  undefined4 local_2c;
  uint local_28;
  uint uStack_24;
  uint local_1c;
  
  local_1c._0_1_ = (undefined1)param_1;
  uVar4 = (undefined1)local_1c;
  local_1c = param_1;
  local_28 = FUN_14027bd8();
  if ((local_28 & 0x600000) != 0) {
    aiStack_38[2] = DAT_140a4a4c;
    local_2c = DAT_140a4a48;
    uStack_24 = param_1 & 0xff;
    FUN_1402a6e8(4,0x19b,DAT_140a4a54,DAT_140a4a50);
    return;
  }
  local_2c = *DAT_140a4630;
  if (param_2 == 0) {
    uVar7 = 0xe;
    aiStack_38[1] = 0;
  }
  else if (param_3 == 0) {
    uVar7 = 0xe;
    aiStack_38[1] = 0;
  }
  else {
    uVar7 = (uint)(ushort)(param_3 + 0xe);
    aiStack_38[1] = 1;
  }
  iVar2 = -(uVar7 + 7 & 0xfffffff8);
  FUN_140e5658((int)aiStack_38 + iVar2,0);
  iVar3 = aiStack_38[1];
  uVar5 = DAT_140a4640[1];
  uVar6 = DAT_140a4640[2];
  *(undefined4 *)((int)aiStack_38 + iVar2) = *DAT_140a4640;
  *(undefined4 *)((int)aiStack_38 + iVar2 + 8) = uVar6;
  uVar1 = *(undefined1 *)(DAT_140a4640 + 3);
  *(undefined4 *)((int)aiStack_38 + iVar2 + 4) = uVar5;
  *(undefined1 *)((int)&local_2c + iVar2) = uVar1;
  *(undefined1 *)((int)&local_2c + iVar2 + 1) = uVar4;
  if (iVar3 != 0) {
    FUN_140e5278((int)&local_2c + iVar2 + 2,param_2,param_3);
  }
  FUN_140a5484(3,(int)aiStack_38 + iVar2,uVar7);
  if (*DAT_140a4630 != local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return;
}

