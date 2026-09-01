/* FUN_1009aa8c @ 0x1009aa8c */

void FUN_1009aa8c(int param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int local_50;
  ushort local_4a;
  ushort local_48;
  short local_46;
  short local_44;
  byte local_42;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined1 auStack_30 [20];
  
  iVar1 = FUN_1008cb9c(*(undefined4 *)(param_1 + 8));
  if ((iVar1 == 0) && (iVar1 = FUN_100927e8(*param_2,&local_50,param_4,0), iVar1 != 0)) {
    uVar2 = (uint)local_48;
    if (uVar2 == 0) {
      return;
    }
    if (local_4a == 0) {
      return;
    }
    if ((*(byte *)(local_50 + 0x10) & 3) == 0) {
      local_40 = *param_3 + (int)local_46;
      local_3c = ((param_3[1] - ((int)local_44 + uVar2)) + *(int *)(*param_2 + 8)) -
                 *(int *)(*param_2 + 0xc);
      local_38 = (local_4a - 1) + local_40;
      local_34 = local_3c + (uVar2 - 1);
      iVar1 = FUN_1012a896(auStack_30,&local_40,*(undefined4 *)(param_1 + 8));
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_10092778(local_50,param_4);
      if (iVar1 == 0) {
        return;
      }
      uVar3 = *(undefined4 *)(param_1 + 8);
      *(undefined1 **)(param_1 + 8) = auStack_30;
      if ((local_42 & 0xf) == 9) {
        FUN_10094174(3,DAT_1009ab80,0x337,DAT_1009ab7c,DAT_1009ab78);
      }
      else {
        if ((local_42 & 0xf) != 0xf) {
          iVar1 = FUN_1009b8f8(param_1,param_2,&local_40,&local_50,iVar1);
          *(undefined4 *)(param_1 + 8) = uVar3;
          if (iVar1 == 1) {
            return;
          }
          goto LAB_1009ab6a;
        }
        FUN_1012c8d6(param_1,param_2,&local_50,&local_40);
      }
      *(undefined4 *)(param_1 + 8) = uVar3;
      return;
    }
  }
LAB_1009ab6a:
  FUN_1008fce8(param_1,param_2,param_3,param_4);
  return;
}

