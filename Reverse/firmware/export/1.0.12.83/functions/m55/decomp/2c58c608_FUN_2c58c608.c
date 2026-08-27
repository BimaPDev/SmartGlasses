/* FUN_2c58c608 @ 0x2c58c608 */

undefined4 * FUN_2c58c608(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_2c58c650;
  *(undefined1 *)(param_1 + 2) = 0xff;
  *param_1 = uVar2;
  param_1[1] = 0;
  uVar2 = FUN_2c5fd09c();
  param_1[1] = uVar2;
  uVar1 = FUN_2c5fd0c0(uVar2,DAT_2c58c65c,DAT_2c58c660,DAT_2c58c658,0,DAT_2c58c654,0x19);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_2c59a428(param_1[1]);
  FUN_2c523584(param_1[1],(int)*(char *)(param_1 + 2));
  return param_1;
}

