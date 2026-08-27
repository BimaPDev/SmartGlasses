/* FUN_2c47d1ec @ 0x2c47d1ec */

void FUN_2c47d1ec(int param_1)

{
  undefined4 *puVar1;
  
  if ((code *)*DAT_2c47d214 != (code *)0x0) {
    (*(code *)*DAT_2c47d214)(*(undefined4 *)(param_1 + 0x10));
  }
  if ((code *)*DAT_2c47d218 != (code *)0x0) {
    (*(code *)*DAT_2c47d218)(*(undefined4 *)(param_1 + 0x10));
  }
  puVar1 = DAT_2c47d21c;
  if ((code *)*DAT_2c47d21c != (code *)0x0) {
    (*(code *)*DAT_2c47d21c)(*(undefined4 *)(param_1 + 0x10));
    *puVar1 = 0;
  }
  return;
}

