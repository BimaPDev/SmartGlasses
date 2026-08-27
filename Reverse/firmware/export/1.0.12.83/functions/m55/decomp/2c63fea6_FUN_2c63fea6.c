/* FUN_2c63fea6 @ 0x2c63fea6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c63fea6(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = _LAB_2c63ff44;
  switch(param_1) {
  case 0:
    *_LAB_2c63ff44 = 0;
    FUN_2c63fe4c(3);
    *puVar1 = 1;
    return;
  case 1:
    *_LAB_2c63ff44 = 0;
    FUN_2c63fdf0(3);
    *puVar1 = 1;
    break;
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,uRam2c63ff58,0xcb,_FUN_2c63ff50,_LAB_2c63ff4c,1,1);
  case 4:
    puVar2 = (undefined4 *)*_LAB_2c63ff48;
    if (puVar2 != (undefined4 *)0x0) {
      do {
        (*(code *)*puVar2)(1);
        puVar2 = (undefined4 *)puVar2[1];
      } while (puVar2 != (undefined4 *)0x0);
      return;
    }
    break;
  case 5:
    puVar2 = (undefined4 *)*_LAB_2c63ff48;
    if (puVar2 != (undefined4 *)0x0) {
      do {
        (*(code *)*puVar2)(0);
        puVar2 = (undefined4 *)puVar2[1];
      } while (puVar2 != (undefined4 *)0x0);
      return;
    }
  }
  return;
}

