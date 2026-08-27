/* FUN_140a034c @ 0x140a034c */

undefined4 FUN_140a034c(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  FUN_1402a6e8(4,0x197,DAT_140a0454,DAT_140a0450,DAT_140a044c,*param_1,param_1[2]);
  uVar5 = 0x10;
  FUN_1402a6e8(4,0x199,DAT_140a0454,DAT_140a0450,DAT_140a0458,(short)param_1[1],0x10);
  if (((short)param_1[1] == 0x10) && (*param_1 == DAT_140a045c)) {
    FUN_1402a6e8(4,0x19f,DAT_140a0454,DAT_140a0450,DAT_140a0460,param_1[2],uVar5);
    FUN_1402a6e8(4,0x1a0,DAT_140a0454,DAT_140a0450,DAT_140a0464,0xea4);
    if ((uint)param_1[2] <= *DAT_140a0468 - 0x10U) {
      iVar1 = FUN_140a2edc(0,param_1 + 4);
      iVar2 = param_1[3];
      iVar4 = iVar1;
      FUN_1402a6e8(4,0x1a7,DAT_140a0454,DAT_140a0450,DAT_140a046c,iVar1,iVar2);
      if (param_1[3] == iVar1) {
        FUN_1402a6e8(4,0x1ab,DAT_140a0454,DAT_140a0450,DAT_140a0470,iVar4,iVar2);
        uVar3 = param_1[2];
        if (uVar3 < 0xea5) {
          if (uVar3 != 0xea4) {
            FUN_1402a6e8(4,0x1b6,DAT_140a0454,DAT_140a0450,DAT_140a0474,uVar3,0xea4);
            return 1;
          }
          return 1;
        }
        FUN_1402a6e8(4,0x1af,DAT_140a0454,DAT_140a0450,DAT_140a0478,iVar4,iVar2);
      }
    }
  }
  return 0;
}

