/* FUN_1000bd68 @ 0x1000bd68 */

void FUN_1000bd68(int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *DAT_1000bdb0;
  iVar1 = (**(code **)(param_1 + 0x10))
                    (param_2,1,*(undefined2 *)(param_1 + 8),*(code **)(param_1 + 0x10),param_1,iVar3
                     ,param_3);
  if (iVar1 != 1) goto LAB_1000bda8;
  uVar2 = FUN_1000bd1c(param_1,param_2);
  if ((uVar2 == 0) && (*param_2 == '\x05')) {
    uVar2 = (uint)(byte)param_2[4];
  }
  while( true ) {
    if (*DAT_1000bdb0 == iVar3) break;
    FUN_1013cdc0(uVar2 & 0xff);
LAB_1000bda8:
    uVar2 = 0x14;
  }
  return;
}

