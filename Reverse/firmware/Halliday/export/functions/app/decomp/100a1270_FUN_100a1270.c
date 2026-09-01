/* FUN_100a1270 @ 0x100a1270 */

int FUN_100a1270(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  
  puVar4 = *(uint **)(param_1 + 0x54);
  if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(PTR_s_WEST_TOPDIR_framework_base_utils_100a1360,0x2c,
                 PTR_s_buffer_stream_read_100a135c,DAT_100a1358);
  }
  iVar1 = FUN_1011dbf4(puVar4 + 2,0xffffffff,param_3,param_4,param_4);
  if (iVar1 < 0) {
    FUN_100a5b78(((int)PTR_DAT_100a1368 - (int)PTR_DAT_100a1364) * 0x20 & 0xff00U | 0x300011,
                 PTR_s_buffer_stream_read_100a1370,PTR_s_lock_failed__d_100a136c,iVar1);
    param_3 = -iVar1;
  }
  else {
    if (*(char *)(param_1 + 2) == '\x02') {
      uVar3 = *puVar4;
      uVar2 = *(uint *)(param_1 + 4);
      if ((*(byte *)(param_1 + 1) & 3) == 3) {
        iVar1 = uVar2 - uVar3 * (uVar2 / uVar3);
        if ((int)uVar3 < param_3 + iVar1) {
          iVar5 = uVar3 - iVar1;
          FUN_1011ea40(param_2,puVar4[1] + iVar1,iVar5);
          *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar5;
          iVar1 = iVar1 + (param_3 - uVar3);
        }
        else {
          iVar5 = 0;
          iVar1 = param_3;
        }
        FUN_1011ea40(param_2 + iVar5,
                     puVar4[1] +
                     (*(uint *)(param_1 + 4) - *puVar4 * (*(uint *)(param_1 + 4) / *puVar4)),iVar1);
        *(int *)(param_1 + 4) = iVar1 + *(int *)(param_1 + 4);
      }
      else {
        if (uVar3 < param_3 + uVar2) {
          param_3 = uVar3 - uVar2;
        }
        FUN_1011ea40(param_2,puVar4[1] + uVar2,param_3);
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_3;
      }
    }
    else {
      param_3 = 0;
    }
    FUN_10113e2c(puVar4 + 2);
  }
  return param_3;
}

