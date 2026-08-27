/* FUN_2c4a4300 @ 0x2c4a4300 */

void FUN_2c4a4300(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar1 = DAT_2c4a4330;
  puVar2 = (undefined1 *)FUN_2c6442f0(*DAT_2c4a4330,0,param_3,param_4,param_4);
  if (puVar2 != (undefined1 *)0x0) {
    uVar3 = *puVar1;
    *puVar2 = *param_1;
    puVar2[1] = param_1[1];
    puVar2[2] = param_1[2];
    iVar4 = FUN_2c6442fc(uVar3);
    if (iVar4 == 0) {
      *DAT_2c4a4334 = *DAT_2c4a4334 + '\x01';
    }
  }
  return;
}

