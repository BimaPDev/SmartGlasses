/* FUN_2c51065c @ 0x2c51065c */

undefined4 *
FUN_2c51065c(int param_1,undefined4 param_2,int param_3,int param_4,char param_5,undefined1 param_6)

{
  undefined4 *puVar1;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c510728,0x1b7,DAT_2c510730,DAT_2c51072c,DAT_2c510734);
  }
  if (param_4 != 0) {
    if (param_5 == '\0') {
      if ((*(int *)(param_1 + 0x3c) != 0) ||
         (puVar1 = (undefined4 *)FUN_2c62c968(param_1 + 0x30), puVar1 == (undefined4 *)0x0)) {
        return (undefined4 *)0x0;
      }
      *puVar1 = param_2;
      *(undefined1 *)(puVar1 + 3) = 0;
      *(undefined1 *)(puVar1 + 6) = param_6;
      *(undefined2 *)((int)puVar1 + 0x1a) = 0;
      puVar1[4] = param_3;
      puVar1[5] = param_4;
      *(undefined4 **)(param_1 + 0x3c) = puVar1;
    }
    else {
      puVar1 = (undefined4 *)FUN_2c62c968(param_1 + 0x30);
      if (puVar1 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      *puVar1 = param_2;
      *(char *)(puVar1 + 3) = param_5;
      *(undefined1 *)(puVar1 + 6) = param_6;
      *(undefined2 *)((int)puVar1 + 0x1a) = 0;
      puVar1[4] = param_3;
      puVar1[5] = param_4;
    }
    FUN_2c50f9b8(param_1);
    FUN_2c607df0(param_1);
    FUN_2c607588(param_1);
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c510728,0x1b8,DAT_2c510730,DAT_2c51072c,DAT_2c510724);
}

