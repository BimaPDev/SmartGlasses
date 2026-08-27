/* FUN_2c4dcf10 @ 0x2c4dcf10 */

int FUN_2c4dcf10(int *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_24;
  
  local_24 = param_2;
  if (param_2 == 0) {
    local_24 = (**(code **)(*param_1 + 0xc))(param_1,param_3);
  }
  else {
    iVar3 = param_4;
    if (param_4 == 0) {
      iVar3 = (**(code **)(*param_1 + 0x30))();
    }
    uVar1 = DAT_2c4dcff4;
    if (iVar3 < param_3) {
      iVar4 = (**(code **)(*param_1 + 0xc))(param_1,param_3);
      uVar2 = DAT_2c4dcff8;
      if (iVar4 == 0) {
        FUN_2c4e34f4(0x96f1,0x14,1);
        FUN_2c4e0504(DAT_2c4dcfe4,0,0,0,uVar2,0x14,uVar1,0x1300,DAT_2c4dcfe0,local_24,param_3,
                     param_4);
      }
      else {
        iVar5 = iVar3;
        if (iVar3 == 0) {
          iVar5 = param_3;
        }
        FUN_2c674668(iVar4,local_24,iVar5);
        FUN_2c4e0504(DAT_2c4dcfe8,5,0,0,uVar2,0x1d,uVar1,0x1300,DAT_2c4dcfec,local_24,iVar4,iVar3,
                     param_3);
        if (*DAT_2c4dcff0 < param_3) {
          *DAT_2c4dcff0 = param_3;
        }
      }
      (**(code **)(*param_1 + 0x10))(param_1,&local_24);
      local_24 = iVar4;
    }
  }
  return local_24;
}

