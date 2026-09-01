/* FUN_1013d6ba @ 0x1013d6ba */

undefined4 FUN_1013d6ba(undefined4 param_1,int param_2,undefined4 *param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [4];
  uint local_64;
  
  if ((*(short *)(param_2 + 0xe) < 0) ||
     (iVar1 = FUN_10119c00(param_1,(int)*(short *)(param_2 + 0xe),auStack_68), iVar1 < 0)) {
    *param_4 = 0;
    if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x18) < 0) {
      uVar2 = 0x40;
      goto LAB_1013d6fa;
    }
  }
  else {
    *param_4 = (uint)((local_64 & 0xf000) == 0x2000);
  }
  uVar2 = 0x400;
LAB_1013d6fa:
  *param_3 = uVar2;
  return 0;
}

