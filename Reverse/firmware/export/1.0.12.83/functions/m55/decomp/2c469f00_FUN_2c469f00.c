/* FUN_2c469f00 @ 0x2c469f00 */

void FUN_2c469f00(undefined4 param_1,undefined4 param_2,undefined4 *param_3,char *param_4)

{
  undefined4 uVar1;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_c;
  
  uStack_c = *param_3;
  if (*param_4 == '\0') {
    func_0x2c620e10(auStack_20,param_2,0);
    auStack_20[0] = 1;
    uStack_1c = 10;
    uStack_18 = 100;
    uVar1 = FUN_2c620e2c(auStack_20);
    *puRam2c469f78 = uVar1;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x1e,uRam2c469f74,uRam2c469f70,uRam2c469f6c);
}

