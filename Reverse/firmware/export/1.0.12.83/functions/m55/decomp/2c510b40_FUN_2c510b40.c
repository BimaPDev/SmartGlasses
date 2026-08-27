/* FUN_2c510b40 @ 0x2c510b40 */

void FUN_2c510b40(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_2c50f968();
  if (iVar1 != 0) {
    iVar1 = param_1[0xb11];
    if ((iVar1 != 0) && ((*(char *)(iVar1 + 0x90) != '\0' || (*(char *)(iVar1 + 0x124) != '\0')))) {
      if ((*(char *)(param_1 + 0x585) != '\0') && (*(char *)(param_1 + 0xb0a) != '\0')) {
        uVar2 = *param_1;
        *(undefined1 *)(param_1 + 0xb12) = 0;
        param_1[0x584] = 0;
        param_1[0x582] = 0;
        param_1[0x583] = 0;
        *(undefined1 *)(iVar1 + 0x7c) = *(undefined1 *)((int)param_1 + 0x2c31);
        param_1[0xb09] = 0;
        param_1[0xb07] = 0;
        param_1[0xb08] = 0;
        *(undefined1 *)(iVar1 + 0x110) = *(undefined1 *)((int)param_1 + 0x2c3d);
        param_1[0xb11] = 0;
        FUN_2c50f9b8(uVar2);
        uVar2 = *param_1;
        FUN_2c607df0();
        FUN_2c607588(uVar2);
        return;
      }
      *(undefined1 *)(param_1 + 0xb12) = 1;
      return;
    }
  }
  return;
}

