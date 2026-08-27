/* FUN_2c5105dc @ 0x2c5105dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c5105dc(int param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_2c62ca30(param_1 + 0x24);
  piVar2 = (int *)FUN_2c62c968(param_1 + 0x24);
  if (piVar2 != (int *)0x0) {
    *piVar2 = param_1;
    *(undefined1 *)(piVar2 + 0xb12) = 0;
    *(undefined1 *)(piVar2 + 0x581) = 0;
    piVar2[0x582] = 0;
    piVar2[0x583] = 0;
    piVar2[0x584] = 0;
    *(undefined1 *)(piVar2 + 0x585) = 1;
    *(undefined1 *)(piVar2 + 0xb0d) = 0;
    piVar2[0xb07] = 0;
    piVar2[0xb08] = 0;
    piVar2[0xb09] = 0;
    *(undefined1 *)(piVar2 + 0xb10) = 0;
    iVar1 = _DAT_2c510658;
    *(undefined1 *)(piVar2 + 0xb06) = 1;
    *(undefined1 *)(piVar2 + 0xb0a) = 1;
    piVar2[0xb0c] = iVar1;
    piVar2[0xb0f] = iVar1;
    FUN_2c50f9b8(param_1);
    FUN_2c607df0(param_1);
    FUN_2c607588(param_1);
  }
  return piVar2;
}

