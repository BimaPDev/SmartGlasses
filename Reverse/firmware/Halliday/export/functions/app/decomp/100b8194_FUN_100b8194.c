/* FUN_100b8194 @ 0x100b8194 */

undefined4 FUN_100b8194(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  
  if ((param_1 == 0) || (*(char *)(param_1 + 0x231) == '\0')) {
LAB_100b819e:
    uVar2 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x228);
    if (uVar3 < param_2) {
      FUN_100a5b78((DAT_100b8278 - DAT_100b8274) * 0x20 & 0xff00U | 0xca0012,DAT_100b827c,
                   DAT_100b8280,uVar3,param_2);
    }
    else {
      uVar5 = param_2 + *(int *)(param_1 + 0x22c);
      if (uVar5 <= uVar3) {
        *(uint *)(param_1 + 0x22c) = uVar5;
        iVar1 = DAT_100b8274;
        if (param_3 == 0) {
          if ((uint)*(byte *)(param_1 + 0x230) * (uVar3 / 100) + uVar3 / 100 < uVar5) {
            uVar3 = (uVar5 * 100) / uVar3;
            uVar5 = uVar3 & 0xff;
            iVar6 = DAT_100b8278 - DAT_100b8274;
            *(char *)(param_1 + 0x230) = (char)uVar3;
            uVar3 = iVar6 * 0x20 & 0xff00;
            if (uVar5 < 100) {
              FUN_100b80dc(param_1,DAT_100b8288,uVar5,iVar1,param_1,param_2,0);
              uVar4 = *(undefined1 *)(param_1 + 0x230);
              uVar3 = uVar3 | 0xe10000;
            }
            else {
              FUN_100b80dc(param_1,DAT_100b8288,99,iVar1,param_1,param_2,0);
              uVar4 = 99;
              uVar3 = uVar3 | 0xde0000;
            }
            FUN_100a5b78(uVar3 | 0x31,DAT_100b827c,DAT_100b828c,uVar4);
          }
        }
        else {
          FUN_100b80dc(param_1,DAT_100b8288,100,param_2,param_1,param_2,param_3);
        }
        goto LAB_100b819e;
      }
      FUN_100a5b78((DAT_100b8278 - DAT_100b8274) * 0x20 & 0xff00U | 0xd00013,DAT_100b827c,
                   DAT_100b8284,param_2,*(int *)(param_1 + 0x22c),uVar3);
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

