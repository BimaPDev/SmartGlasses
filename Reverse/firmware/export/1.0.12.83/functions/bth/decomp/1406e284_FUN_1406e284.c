/* FUN_1406e284 @ 0x1406e284 */

undefined4
FUN_1406e284(undefined4 param_1,int param_2,undefined4 param_3,int param_4,ushort param_5,
            int *param_6)

{
  undefined2 uVar1;
  int iVar2;
  
  if ((param_4 != 0) && (0xf < param_5)) {
    iVar2 = FUN_14073fdc(param_5,2,param_3,param_4,param_4);
    if (iVar2 != 0) {
      *(char *)(iVar2 + 0xc) = (char)param_3;
      *(int *)(iVar2 + 4) = param_4;
      *(undefined2 *)(iVar2 + 10) = 0xffff;
      if (param_2 == 0) {
        *(undefined2 *)(iVar2 + 8) = 0;
      }
      else {
        uVar1 = FUN_14064228();
        *(undefined2 *)(iVar2 + 8) = uVar1;
      }
      *param_6 = iVar2;
      return 0;
    }
    return 0x4b;
  }
  return 0x4c;
}

