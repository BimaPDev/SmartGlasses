/* FUN_1000b8f4 @ 0x1000b8f4 */

void FUN_1000b8f4(byte *param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  
  uVar4 = 0;
  local_24 = *DAT_1000b9a8;
  uVar2 = 0;
  pbVar5 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  if (param_2 == (undefined4 *)0x0) goto LAB_1000b96a;
  local_2c = (undefined4 *)*param_2;
  local_28 = CONCAT22((short)((uint)param_3 >> 0x10),*(undefined2 *)(param_2 + 1));
  do {
    uVar2 = (uint)local_2c >> 0x10;
    if (*param_1 == local_2c._1_1_ >> 4) {
      if (param_4 < uVar2) {
        uVar1 = 0xe;
      }
      else {
        uVar1 = FUN_1000bcb4(param_1,param_3,uVar2,*param_1,pbVar5);
        if (uVar1 == 0) goto LAB_1000b942;
      }
    }
    else if (param_4 < uVar2) {
      uVar1 = 0xe;
    }
    else {
      uVar1 = 0x1e;
    }
    do {
      FUN_1000bdec(param_1);
      uVar3 = uVar2;
      if ((uVar1 != 0x14) && (uVar1 != 10)) {
LAB_1000b942:
        FUN_1000bc84(param_1,uVar1 & 0xff);
        if (uVar1 == 0xd) goto LAB_1000b960;
        uVar3 = uVar2;
        if (uVar1 == 0) goto LAB_1000b952;
      }
      do {
        uVar2 = -uVar1;
LAB_1000b952:
        if (*DAT_1000b9a8 == local_24) {
          return;
        }
        FUN_1013cdc0(uVar2);
        uVar2 = uVar3;
LAB_1000b960:
        uVar4 = uVar4 + 1;
        uVar3 = uVar2;
      } while (param_1[7] <= uVar4);
LAB_1000b96a:
      uVar1 = FUN_1000bd68(param_1,&local_2c);
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = local_2c;
        *(undefined2 *)(param_2 + 1) = (undefined2)local_28;
      }
    } while (uVar1 != 0);
  } while( true );
}

