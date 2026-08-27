/* FUN_2c4f2930 @ 0x2c4f2930 */

void FUN_2c4f2930(int param_1,undefined4 param_2,int param_3,undefined1 *param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auStack_24 [4];
  undefined4 local_20;
  uint local_1c;
  
  local_1c = *DAT_2c4f29e4;
  if (param_3 == 0x3ff) {
    uVar3 = 0;
    uVar1 = *DAT_2c4f29f4;
    *param_4 = 2;
    *(undefined2 *)(param_4 + 8) = uVar1;
    uVar2 = param_2;
  }
  else {
    uVar3 = *(int *)(param_1 + 0x6c) + 1;
    uVar4 = FUN_2c4f221c(param_1,param_2,DAT_2c4f29e8,uVar3 | param_3 << 10,0,param_4 + 8,
                         uVar3 & 0x3ff);
    uVar3 = (uint)uVar4;
    uVar2 = (int)((ulonglong)uVar4 >> 0x20);
    if (-1 < (int)uVar3) {
      *param_4 = (char)(uVar3 >> 0x14);
      uVar4 = FUN_2c4f221c(param_1,param_2,DAT_2c4f29ec,param_3 << 10 | DAT_2c4f29f0,0,auStack_24,8)
      ;
      uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
      uVar3 = (uint)uVar4;
      if (-1 < (int)uVar3) {
        if (uVar3 >> 0x14 == 0x202) {
          uVar3 = 0;
          *(undefined4 *)(param_4 + 4) = local_20;
        }
        else if (uVar3 >> 0x14 == 0x201) {
          *(uint *)(param_4 + 4) = uVar3 & 0x3ff;
          uVar3 = 0;
        }
        else {
          uVar3 = 0;
        }
      }
    }
  }
  if ((*DAT_2c4f29e4 ^ local_1c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar3,uVar2,*DAT_2c4f29e4 ^ local_1c,0);
}

