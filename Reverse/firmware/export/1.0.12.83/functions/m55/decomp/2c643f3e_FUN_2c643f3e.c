/* FUN_2c643f3e @ 0x2c643f3e */

void FUN_2c643f3e(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
LAB_2c643f4a:
  do {
    iVar3 = *(int *)(param_1 + 0x14);
    if ((int)((uint)*(byte *)(param_1 + 3) << 0x1c) < 0) {
      *(undefined1 *)(param_1 + 0x18) = 0;
      func_0x2c643b30(param_1,0);
      if (*(int *)(param_1 + 8) != 0) {
        iVar1 = FUN_2c645b54(param_1);
        FUN_2c64621c(iVar1,0);
        *(int *)(param_1 + 0xc) = iVar1;
        *(undefined4 *)(param_1 + 0x10) = 0;
        iVar2 = *(int *)(iVar1 + 0x2c);
        *(int *)(param_1 + 0x14) = iVar2;
        if (iVar2 != 0) {
          *(int *)(iVar2 + 0x10) = param_1;
        }
        *(int *)(iVar1 + 0x2c) = param_1;
        *(undefined1 *)(param_1 + 0x18) = 1;
        func_0x2c643b24(param_1,1);
        param_1 = iVar3;
        if (iVar3 == 0) {
          return;
        }
        goto LAB_2c643f4a;
      }
    }
    param_1 = iVar3;
    if (iVar3 == 0) {
      return;
    }
  } while( true );
}

